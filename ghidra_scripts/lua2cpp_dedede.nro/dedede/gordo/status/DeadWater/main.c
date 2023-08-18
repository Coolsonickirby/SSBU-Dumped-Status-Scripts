
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeGordo::status::DeadWater_main(L2CWeaponDededeGordo *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_OFF);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x3c);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_DEAD_REMOVE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::L2CValue(aLStack80,0xa8e0399a1);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    FUN_7100037cf0(aLStack112,this);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue(aLStack80,&LAB_7100037f60);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,DeadWater_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

