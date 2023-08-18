
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntFinalenemy::status::Wait_init
          (L2CWeaponDuckhuntFinalenemy *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  FUN_7100027000(&local_40,this);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  lVar5 = lib::L2CValue::as_number(aLStack80);
  uVar2 = lib::L2CValue::as_number(aLStack112);
  local_40 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack56 = (ulong)uVar2;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_FLOAT_ROT_Y);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

