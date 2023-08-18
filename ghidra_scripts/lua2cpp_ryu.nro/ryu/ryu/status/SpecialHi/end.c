
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::SpecialHiCommand_end(L2CFighterRyu *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_HI_JUMP);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_HI_FALL);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_HI_LANDING);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        app::lua_bind::MotionAnimcmdModule__flush_current_motion_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,0x121ae6618c);
        lib::L2CValue::L2CValue(aLStack96,false);
        lib::L2CValue::L2CValue(aLStack112,true);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        bVar2 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::EffectModule__kill_kind_impl
                  (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KEN);
        uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0x127b397c4f);
          lib::L2CValue::L2CValue(aLStack96,false);
          lib::L2CValue::L2CValue(aLStack112,true);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          bVar2 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::EffectModule__kill_kind_impl
                    (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x15d8af27e7);
          lib::L2CValue::L2CValue(aLStack96,false);
          lib::L2CValue::L2CValue(aLStack112,true);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          bVar2 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::EffectModule__kill_kind_impl
                    (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x16246366f1);
          lib::L2CValue::L2CValue(aLStack96,false);
          lib::L2CValue::L2CValue(aLStack112,true);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          bVar2 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::EffectModule__kill_kind_impl
                    (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,true);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::ItemModule__set_change_status_event_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

