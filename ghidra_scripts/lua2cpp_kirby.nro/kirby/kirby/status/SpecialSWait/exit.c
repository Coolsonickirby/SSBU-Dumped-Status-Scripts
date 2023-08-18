
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialSAttack_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar6 = aLStack112;
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar3);
  FUN_7100014a90(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_START);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0x12eb4bf175);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::ControlModule__stop_rumble_kind_impl(this->moduleAccessor,HVar5,0x50000000);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x127242a0cf);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::ControlModule__stop_rumble_kind_impl(this->moduleAccessor,HVar5,0x50000000);
      lib::L2CValue::_L2CValue(aLStack64);
      FUN_7100014c50(this);
    }
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack112,pLVar3);
  FUN_7100014a90(aLStack80,aLStack112);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_ATTACK);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) goto LAB_710000a9b8;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    pLVar6 = aLStack64;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710000a9b8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

