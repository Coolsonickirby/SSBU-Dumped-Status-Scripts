
void __thiscall
L2CWeaponSonicGimmickjump::status::Remove_main_loop
          (L2CWeaponSonicGimmickjump *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x14451d7c64);
  HVar2 = lib::L2CValue::as_hash(aLStack64);
  iVar1 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar2,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack48,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

