
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveLightning::status::Regular_exec(L2CWeaponBraveLightning *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_COLLISION_CHECK);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLOAT_MOVE_DIST);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,0xf1d1dea78);
    lib::L2CValue::L2CValue(aLStack144,0xe8ed99520);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::L2CValue(aLStack64,10.0);
    lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_COLLISION_CHECK);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::GroundModule__set_collidable_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

