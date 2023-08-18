
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::FinalRide_main(L2CFighterCaptain *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  L2CValue *this_00;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_NONE);
  GVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_BLUEFALCON);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_CAPTAIN_BLUEFALCON_STATUS_KIND_RIDE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xc107b9635);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_GROUND_MOT);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1044a0c720);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_AIR_MOT);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xcea74ab56);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_GROUND_MOT);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x10beaffa43);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_AIR_MOT);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_AIR_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar6);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_GROUND_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar6);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,FinalRide_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

