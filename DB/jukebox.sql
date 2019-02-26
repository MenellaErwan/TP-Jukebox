-- phpMyAdmin SQL Dump
-- version 4.5.4.1deb2ubuntu2.1
-- http://www.phpmyadmin.net
--
-- Client :  localhost
-- Généré le :  Mar 26 Février 2019 à 11:16
-- Version du serveur :  5.7.25-0ubuntu0.16.04.2
-- Version de PHP :  7.0.32-0ubuntu0.16.04.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `jukebox`
--

-- --------------------------------------------------------

--
-- Structure de la table `FichierAudio`
--

CREATE TABLE `FichierAudio` (
  `ID` decimal(65,0) NOT NULL,
  `Fichier` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `FichierAudio`
--

INSERT INTO `FichierAudio` (`ID`, `Fichier`) VALUES
('1', '/home/bigbrother4/galvez/DEV/projetJukebox/musique/GudMusic.txt');

-- --------------------------------------------------------

--
-- Structure de la table `Musique`
--

CREATE TABLE `Musique` (
  `ID` decimal(65,0) NOT NULL,
  `NomMusique` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `Genre` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `Artiste` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `Durée` time NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `Musique`
--

INSERT INTO `Musique` (`ID`, `NomMusique`, `Genre`, `Artiste`, `Durée`) VALUES
('1', 'musiqueTest', 'inconnu', 'inconnu', '00:01:26');

-- --------------------------------------------------------

--
-- Structure de la table `Playlist`
--

CREATE TABLE `Playlist` (
  `ID` decimal(65,0) NOT NULL,
  `NomPlaylist` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `Playlist`
--

INSERT INTO `Playlist` (`ID`, `NomPlaylist`) VALUES
('1', 'playlistTest');

--
-- Index pour les tables exportées
--

--
-- Index pour la table `FichierAudio`
--
ALTER TABLE `FichierAudio`
  ADD UNIQUE KEY `ID` (`ID`);

--
-- Index pour la table `Musique`
--
ALTER TABLE `Musique`
  ADD PRIMARY KEY (`ID`);

--
-- Index pour la table `Playlist`
--
ALTER TABLE `Playlist`
  ADD UNIQUE KEY `ID` (`ID`);

--
-- Contraintes pour les tables exportées
--

--
-- Contraintes pour la table `FichierAudio`
--
ALTER TABLE `FichierAudio`
  ADD CONSTRAINT `ID_FichierAudio` FOREIGN KEY (`ID`) REFERENCES `Musique` (`ID`);

--
-- Contraintes pour la table `Playlist`
--
ALTER TABLE `Playlist`
  ADD CONSTRAINT `ID_playlist` FOREIGN KEY (`ID`) REFERENCES `Musique` (`ID`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
