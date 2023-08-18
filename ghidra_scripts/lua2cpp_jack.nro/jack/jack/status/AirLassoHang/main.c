
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::AirLassoHang_main(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x187b0df3e5);
  HVar2 = lib::L2CValue::as_hash(aLStack64);
  iVar1 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar2,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack48,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0xac617e70f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_CLIFF_HANG_DATA_AIR_LASSO_HANG);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lua2cpp::L2CFighterCommon::status_AirLassoHang(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

