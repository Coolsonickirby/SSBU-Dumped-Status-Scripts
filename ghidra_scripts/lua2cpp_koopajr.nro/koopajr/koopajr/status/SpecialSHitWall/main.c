
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialSHitWall_main(L2CFighterKoopajr *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  undefined8 uVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack208,0x26a0ecea04);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,8);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack144,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,0xa82dd1262);
    lib::L2CValue::operator_(aLStack144,aLStack208);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0xdb4059b7b);
    lib::L2CValue::operator_(aLStack144,aLStack208);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  FUN_7100012330(aLStack160,this->moduleAccessor);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  uVar7 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::L2CValue(aLStack208,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack208);
  lib::L2CValue::L2CValue(aLStack112,aLStack192);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack112,8);
  lib::L2CValue::L2CValue(aLStack224,false);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  uVar5 = lib::L2CValue::as_number(pLVar4);
  uVar2 = lib::L2CValue::as_number(this_00);
  local_60 = uVar5 & 0xffffffff | (ulong)uVar2 << 0x20;
  uStack88 = 0;
  app::lua_bind::ShakeModule__req_impl
            (this->moduleAccessor,HVar6,iVar3,(bool)(bVar1 & 1),(Vector2f *)&local_60,1.0,0.0,false,
             false);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialSHitWall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

