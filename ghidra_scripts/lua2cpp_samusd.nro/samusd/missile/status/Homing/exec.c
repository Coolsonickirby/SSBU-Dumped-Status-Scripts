
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSamusdMissile::status::Homing_exec(L2CWeaponSamusdMissile *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 uStack64;
  BattleObject *pBStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0x2977ab51ea);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack64);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SAMUS_MISSILE_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar5);
  puVar4 = &uStack64;
  lib::L2CValue::operator_(aLStack112,(L2CValue *)puVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack112,(L2CValue *)puVar4);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SAMUS_MISSILE_WORK_FLOAT_GRAVITY_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar5);
  puVar4 = &uStack64;
  lib::L2CValue::operator_(aLStack96,(L2CValue *)puVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,(L2CValue *)puVar4);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  }
  lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack160,90.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  HVar3 = lib::L2CValue::as_hash(aLStack144);
  uVar6 = lib::L2CValue::as_number(aLStack80);
  uVar7 = lib::L2CValue::as_number(aLStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  uStack64 = CONCAT44(uVar7,uVar6);
  pBStack56 = (BattleObject *)(ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar3,(Vector3f *)&uStack64,0,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

