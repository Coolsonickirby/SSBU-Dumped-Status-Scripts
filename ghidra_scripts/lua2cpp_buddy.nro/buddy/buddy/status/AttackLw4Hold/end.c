
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::AttackLw4Hold_end(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack48,pLVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_GENERATE_ARTICLE_PARTNER);
  lua2cpp::L2CFighterCommon::sub_remove_exist_article_at_status_end
            (this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_end_AttackLw4Hold(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

