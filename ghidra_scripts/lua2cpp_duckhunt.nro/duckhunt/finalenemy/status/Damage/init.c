
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntFinalenemy::status::Damage_init
          (L2CWeaponDuckhuntFinalenemy *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_FLOAT_ROT_Y);
  fVar3 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_ROT_PATTERN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  FUN_7100027000(&local_50,this);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,aLStack112);
  FUN_7100027320(&local_50,this,aLStack128);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  lVar6 = lib::L2CValue::as_number(aLStack96);
  uVar4 = lib::L2CValue::as_number(aLStack160);
  local_50 = uVar5 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar4;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_FLOAT_ROT_Y);
  fVar3 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

