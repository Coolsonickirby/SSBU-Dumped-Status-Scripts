
void __thiscall
L2CFighterTantan::status::AttackJumpSquat_exec(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_71000186b0(aLStack48,this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,&DAT_7100022340);
  lua2cpp::L2CFighterCommon::uniq_process_JumpSquat_exec_status_param(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

