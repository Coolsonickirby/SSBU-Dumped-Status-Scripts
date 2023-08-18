
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeGordo::status::Dead_main(L2CWeaponDededeGordo *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  HitStatus HVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_OFF);
  HVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,2);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_KIND_THROW);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_KIND_FALL);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_7100035578;
  }
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_BOUND_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar7 = lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_DEAD_STAY);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
LAB_7100035578:
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_DEAD_STAY);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x25e7afdbfa);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::L2CValue(aLStack144,0x4ed254924);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar8 = lib::L2CValue::as_hash(aLStack144);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x10);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT);
    lib::L2CValue::L2CValue(aLStack144,0x1125451143);
    lib::L2CValue::L2CValue(aLStack160,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,false);
    FUN_710002ab20(aLStack128,this,aLStack96,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,
                   aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,
                   aLStack336,aLStack352,aLStack368,aLStack384);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_DEAD_REMOVE_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    FUN_7100037f80(aLStack144,this);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x14);
  lib::L2CValue::L2CValue(aLStack96,&LAB_7100038340);
  lib::L2CValue::operator_(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Dead_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

