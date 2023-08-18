
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalEnd_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
  HVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_GOMORRAH);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_HAIR);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xb81e7eef7);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_GROUND_MOTION_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xf84e1d201);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_AIR_MOTION_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xb7be8d394);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_GROUND_MOTION_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xf7eeeef62);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_AIR_MOTION_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_FINAL_START_SITUATION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

