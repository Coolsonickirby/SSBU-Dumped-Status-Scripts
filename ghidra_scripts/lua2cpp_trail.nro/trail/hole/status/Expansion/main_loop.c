
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTrailHole::status::Expansion_main_loop(L2CWeaponTrailHole *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xadacf0fa6);
    lib::L2CValue::L2CValue(aLStack96,0x9833fd8c4);
    uVar3 = lib::L2CValue::as_integer(aLStack64);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xadacf0fa6);
    lib::L2CValue::L2CValue(aLStack112,0xfc5034918);
    uVar3 = lib::L2CValue::as_integer(aLStack64);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    uVar3 = lib::L2CValue::operator__(aLStack96,pLVar5);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_TRAIL_HOLE_STATUS_WORK_FLOAT_INIT_SCALE);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator_(aLStack64,aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,aLStack112);
        lib::L2CValue::L2CValue(aLStack160,aLStack80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
        lib::L2CValue::L2CValue(aLStack64,1.0);
        lib::L2CValue::operator_(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::operator_(pLVar5,aLStack176);
        lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0xc0);
        lib::L2CValue::operator_(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      fVar6 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_TRAIL_HOLE_STATUS_KIND_STAY);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

