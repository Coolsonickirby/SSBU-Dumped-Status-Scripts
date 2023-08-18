
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntFinalenemy::status::Damage_exec
          (L2CWeaponDuckhuntFinalenemy *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
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
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_ROT_WAIT_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar3 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_ROT_WAIT_FRAME);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
  }
  else {
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
    uVar3 = lib::L2CValue::as_number(aLStack144);
    lVar6 = lib::L2CValue::as_number(aLStack96);
    uVar4 = lib::L2CValue::as_number(aLStack160);
    local_50 = uVar3 & 0xffffffff | lVar6 << 0x20;
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_FLOAT_ROT_Y);
    fVar5 = (float)lib::L2CValue::as_number(aLStack144);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_ROT_WAIT_FRAME);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

