
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialSRideLoop_main_loop
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
    lib::L2CValue::operator_(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_7100023704;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar1 & 1U) == 0) {
        pLVar5 = aLStack96;
LAB_7100023928:
        lib::L2CValue::_L2CValue(pLVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
          lib::L2CValue::L2CValue(aLStack96,0x207159b538);
          lib::L2CValue::L2CValue(aLStack112,0);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar7,uVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          pLVar5 = aLStack80;
          goto LAB_7100023928;
        }
      }
      iVar3 = 0;
      goto LAB_71000237a0;
    }
  }
  else {
LAB_7100023704:
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0x2cec343288);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_JUMP);
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar3 = 1;
LAB_71000237a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

