
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMario::status::SpecialLwShoot_main(L2CFighterMario *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack160,0x1d1225fc63);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x100adfd8cf);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_SHOOT_WORK_INT_MOTION_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x148b6a578f);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_SHOOT_WORK_INT_MOTION_KIND_AIR);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x57a317a5f);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARIO_GENERATE_ARTICLE_PUMP);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar7,(bool)(bVar1 & 1),-1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x101bf4fe67);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_SHOOT_WORK_INT_MOTION_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x149a417127);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_SHOOT_WORK_INT_MOTION_KIND_AIR);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x56b1a5cf7);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARIO_GENERATE_ARTICLE_PUMP);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar7,(bool)(bVar1 & 1),-1.0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARIO_GENERATE_ARTICLE_PUMP);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MARIO_PUMP_STATUS_KIND_SHOOT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialLwShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

