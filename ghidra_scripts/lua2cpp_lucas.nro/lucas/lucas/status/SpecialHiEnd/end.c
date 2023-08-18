
void __thiscall
L2CFighterLucas::status::SpecialHiEnd_end(L2CFighterLucas *this,L2CValue *return_value)

{
  Hash40 HVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar1 = lib::L2CValue::as_hash(aLStack80);
  uVar2 = lib::L2CValue::as_number(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar3,uVar2);
  uStack56 = (ulong)uVar4;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar1,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

