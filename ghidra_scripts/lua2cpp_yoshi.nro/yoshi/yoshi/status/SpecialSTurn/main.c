
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialSTurn_main(L2CFighterYoshi *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),0xff);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  fVar4 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x14787e85bf);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_40);
  iVar2 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar3,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0xfa7982c0a);
  lib::L2CValue::L2CValue(aLStack112,1000);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  uStack56 = _LUA_SCRIPT_LINE_WAZA_CUSTOMIZE;
  local_40 = LUA_SCRIPT_LINE_MAP_CORRECTION;
  app::lua_bind::ShakeModule__req_impl
            (this->moduleAccessor,HVar3,iVar2,false,(Vector2f *)&local_40,1.0,0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x120f4da185);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,true);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_40);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::ControlModule__set_rumble_impl
            (this->moduleAccessor,HVar3,iVar2,(bool)(bVar1 & 1),0x50000000);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,SpecialSTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  return;
}

