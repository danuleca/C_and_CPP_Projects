UNLOCK TABLES;
DROP TABLE IF EXISTS `schools`;
CREATE TABLE `schools` (
  `name` varchar(255) NOT NULL,
  `address` varchar(255) NOT NULL,
  `city` varchar(255) NOT NULL,
  PRIMARY KEY (`name`),
  UNIQUE KEY `name` (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

LOCK TABLES `schools` WRITE;
UNLOCK TABLES;



DROP TABLE IF EXISTS `students`;
CREATE TABLE `students` (
  `first_name` varchar(50) NOT NULL,
  `last_name` varchar(50) NOT NULL,
  `grade` int NOT NULL,
  `class` varchar(5) NOT NULL,
  `school` varchar(255) NOT NULL,
  KEY `school` (`school`),
  CONSTRAINT `students_ibfk_1` FOREIGN KEY (`school`) REFERENCES `schools` (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;



LOCK TABLES `students` WRITE;
UNLOCK TABLES;

DROP TABLE IF EXISTS `subjects`;
CREATE TABLE `subjects` (
  `name` varchar(50) NOT NULL,
  `teacher` int NOT NULL,
  `grade` int NOT NULL,
  `class` varchar(5) NOT NULL,
  KEY `teacher` (`teacher`),
  CONSTRAINT `subjects_ibfk_1` FOREIGN KEY (`teacher`) REFERENCES `teachers` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


LOCK TABLES `subjects` WRITE;
UNLOCK TABLES;


DROP TABLE IF EXISTS `teachers`;
CREATE TABLE `teachers` (
  `id` int NOT NULL,
  `first_name` varchar(50) NOT NULL,
  `last_name` varchar(50) NOT NULL,
  `school` varchar(255) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id` (`id`),
  KEY `school` (`school`),
  CONSTRAINT `teachers_ibfk_1` FOREIGN KEY (`school`) REFERENCES `schools` (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;



LOCK TABLES `teachers` WRITE;
UNLOCK TABLES;