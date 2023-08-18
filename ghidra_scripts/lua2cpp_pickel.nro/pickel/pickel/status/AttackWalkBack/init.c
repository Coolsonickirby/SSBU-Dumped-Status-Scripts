
void __thiscall
L2CFighterPickel::status::AttackWalkBack_init(L2CFighterPickel *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xbaee2f27a);
  lib::L2CValue::L2CValue(aLStack80,0xdae4249e4);
  lib::L2CValue::L2CValue(aLStack96,0xb1de0f39d);
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CValue::L2CValue(aLStack144,0xee2ec2860);
  lib::L2CValue::L2CValue(aLStack160,0);
  uVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar3);
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common_param
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

