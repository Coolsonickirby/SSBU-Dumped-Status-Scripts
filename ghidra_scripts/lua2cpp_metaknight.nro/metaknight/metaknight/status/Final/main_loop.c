
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::Final_main_loop(L2CFighterMetaknight *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
LAB_710001302c:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_7100013334;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_7100013334;
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xd1cc74bdd);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
        lib::L2CValue::L2CValue(aLStack96,0xd1cc74bdd);
        lib::L2CValue::L2CValue(aLStack112,true);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xde6c876be);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
        lib::L2CValue::L2CValue(aLStack96,0xde6c876be);
        lib::L2CValue::L2CValue(aLStack112,true);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710001302c;
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x11714e7467);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
        lib::L2CValue::L2CValue(aLStack96,0x11714e7467);
        lib::L2CValue::L2CValue(aLStack112,true);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x118b414904);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
        lib::L2CValue::L2CValue(aLStack96,0x118b414904);
        lib::L2CValue::L2CValue(aLStack112,true);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_STATUS_KIND_FINAL_HIT_WAIT);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100013334:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

