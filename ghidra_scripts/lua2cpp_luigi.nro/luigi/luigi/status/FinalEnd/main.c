
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLuigi::status::FinalEnd_main(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xdf3b40b09);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LUIGI_OBAKYUMU_STATUS_KIND_FINAL_END);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
    lib::L2CValue::L2CValue(aLStack96,0xdf3b40b09);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar5,(bool)(bVar1 & 1),-1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x92ee4d34c);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LUIGI_OBAKYUMU_STATUS_KIND_FINAL_END);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
    lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar5,(bool)(bVar1 & 1),-1.0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

