
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::AttackAirLwStart_end(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  LinkAttribute LVar4;
  L2CValue *this_00;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_FORGE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_AIR_LW_LOOP);
    uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_FORGE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_71000727b8;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_LINK_NO_FORGE);
      lib::L2CValue::L2CValue(aLStack96,0x135688ed8e);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_LINK_NO_FORGE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_FORGE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_71000727b8;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_LINK_NO_FORGE);
      lib::L2CValue::L2CValue(aLStack96,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
      lib::L2CValue::L2CValue(aLStack112,true);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      LVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar3,LVar4,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_LINK_NO_FORGE);
      lib::L2CValue::L2CValue(aLStack96,_LINK_ATTRIBUTE_REFERENCE_PARENT_ATTACK_STOP);
      lib::L2CValue::L2CValue(aLStack112,true);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      LVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar3,LVar4,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_LINK_NO_FORGE);
      lib::L2CValue::L2CValue(aLStack96,LINK_ATTRIBUTE_REFERENCE_PARENT_SHAKE);
      lib::L2CValue::L2CValue(aLStack112,true);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      LVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar3,LVar4,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_71000727b8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

