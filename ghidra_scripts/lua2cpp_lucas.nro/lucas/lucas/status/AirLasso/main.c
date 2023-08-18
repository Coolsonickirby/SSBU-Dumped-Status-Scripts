
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLucas::status::AirLasso_main(L2CFighterLucas *this,L2CValue *return_value)

{
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI2);
  lib::L2CValue::L2CValue(aLStack96,_ARTICLE_ID_NONE);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_CLIFF_HANG_DATA_AIR_LASSO);
  lib::L2CValue::L2CValue(aLStack128,true);
  lua2cpp::L2CFighterCommon::status_AirLasso
            (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

