
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialSRide_end(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *this_00;
  ulong uVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_80;
  undefined8 uStack120;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_S_DRIVE);
  uVar5 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_TEAM_2ND_ID_NONE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::TeamModule__set_team_second_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_TEAM_2ND_ID_NONE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::TeamModule__set_hit_team_second_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96);
    pfVar6 = (float *)app::lua_bind::GroundModule__get_shape_safe_pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,*pfVar6);
    lib::L2CValue::L2CValue(aLStack112,pfVar6[1]);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_80);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    uVar7 = lib::L2CValue::as_number(aLStack80);
    uVar8 = lib::L2CValue::as_number(aLStack96);
    local_80 = CONCAT44(uVar8,uVar7);
    uStack120 = 0;
    app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_80)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PICKEL_GENERATE_ARTICLE_TROLLEY);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

