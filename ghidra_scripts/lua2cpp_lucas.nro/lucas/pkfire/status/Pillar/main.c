
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucasPkfire::status::Pillar_main(L2CWeaponLucasPkfire *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue *this_00;
  float fVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0xc75487f5b);
  lib::L2CValue::L2CValue(aLStack128,0xb6ca55982);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x6dc128957);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar8 = lib::L2CValue::as_hash(aLStack80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCAS_PK_FIRE_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100023cd0(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100023f10);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x10eaa9bff4);
  lib::L2CValue::L2CValue(aLStack144,0);
  HVar8 = lib::L2CValue::as_hash(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::ControlModule__set_rumble_impl(this->moduleAccessor,HVar8,iVar3,false,0x50000000);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Pillar_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

