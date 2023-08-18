
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackLadder_exit(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_KIND_NONE);
  lua2cpp::L2CFighterCommon::FighterStatusUniqProcessGimmickLadder_exit_ladder(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

