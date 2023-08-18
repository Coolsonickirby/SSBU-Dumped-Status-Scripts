
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::AttackLw4Hold_end(L2CFighterShizue *this,L2CValue *return_value)

{
  L2CTable *this_00;
  L2CValue *pLVar1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_GENERATE_ARTICLE_BUCKET);
  this_00 = (L2CTable *)operator_new(0x48);
  lib::L2CTable::L2CTable(this_00,2);
  lib::L2CValue::L2CValue(aLStack112,this_00);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_LW4_HOLD);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_LW4);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack112,1);
  lib::L2CValue::operator_(pLVar1,aLStack64);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack112,2);
  lib::L2CValue::operator_(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710002e4d0(this,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lua2cpp::L2CFighterCommon::status_end_AttackLw4Hold(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

