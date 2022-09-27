-- --------------------------------------------------------
-- Host:                         127.0.0.1
-- Server version:               10.9.3-MariaDB - mariadb.org binary distribution
-- Server OS:                    Win64
-- HeidiSQL Version:             11.3.0.6295
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Dumping database structure for dayz_a3_cherno
CREATE DATABASE IF NOT EXISTS `dayz_a3_cherno` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `dayz_a3_cherno`;

-- Dumping structure for table dayz_a3_cherno.players
CREATE TABLE IF NOT EXISTS `players` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `uid` varchar(50) CHARACTER SET latin1 NOT NULL DEFAULT '""',
  `pos` varchar(128) CHARACTER SET latin1 NOT NULL DEFAULT '""',
  `inv` text CHARACTER SET latin1 NOT NULL,
  `blood` int(9) NOT NULL DEFAULT 1,
  `charinfo` text CHARACTER SET latin1 NOT NULL,
  `food` text NOT NULL,
  `water` text NOT NULL,
  `medical_info` text NOT NULL,
  `alive` text NOT NULL,
  `stats` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=37 DEFAULT CHARSET=utf8mb3;

-- Dumping structure for table dayz_a3_cherno.vehicles
CREATE TABLE IF NOT EXISTS `vehicles` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `classname` text CHARACTER SET latin1 NOT NULL,
  `pos` text CHARACTER SET latin1 NOT NULL,
  `inv` text CHARACTER SET latin1 NOT NULL,
  `damage` text CHARACTER SET latin1 NOT NULL,
  `alive` text CHARACTER SET latin1 NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=1026 DEFAULT CHARSET=utf8mb3;


-- Dumping database structure for dayz_a3_tavi
CREATE DATABASE IF NOT EXISTS `dayz_a3_tavi` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `dayz_a3_tavi`;

-- Dumping structure for table dayz_a3_tavi.players
CREATE TABLE IF NOT EXISTS `players` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `uid` varchar(50) CHARACTER SET latin1 NOT NULL DEFAULT '""',
  `pos` varchar(128) CHARACTER SET latin1 NOT NULL DEFAULT '""',
  `inv` text CHARACTER SET latin1 NOT NULL,
  `blood` int(9) NOT NULL DEFAULT 1,
  `charinfo` text CHARACTER SET latin1 NOT NULL,
  `food` text NOT NULL,
  `water` text NOT NULL,
  `medical_info` text NOT NULL,
  `alive` text NOT NULL,
  `stats` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb3;


-- Dumping structure for table dayz_a3_tavi.vehicles
CREATE TABLE IF NOT EXISTS `vehicles` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `classname` text CHARACTER SET latin1 NOT NULL,
  `pos` text CHARACTER SET latin1 NOT NULL,
  `inv` text CHARACTER SET latin1 NOT NULL,
  `damage` text CHARACTER SET latin1 NOT NULL,
  `alive` text CHARACTER SET latin1 NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=900 DEFAULT CHARSET=utf8mb3;
