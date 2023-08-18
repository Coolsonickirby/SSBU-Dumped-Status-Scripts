
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalScene01_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_LOUPE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_BAYONETTA);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::FighterManager__start_finalbg_impl(FIGHTER_ATTACK100_TYPE_NONE,iVar3,1.0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_HAIR);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_GOMORRAH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_WICKEDWEAVEARM);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_WICKEDWEAVELEG);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_BAT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_NEXT_SCENE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,2);
  lib::L2CValue::L2CValue(aLStack96,8);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::EffectModule__clear_screen_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1409bb47f9);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FinalScene01_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

