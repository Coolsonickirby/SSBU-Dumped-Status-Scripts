
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiHit_end(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  VisibilityMode VVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GROUND_RHOMBUS_MODIFY_DEFAULT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__set_rhombus_modify_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_VISIBILITY_MODE_NO_GUARANTEE);
  VVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_visibility_mode_impl(this->moduleAccessor,VVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_WALL_JUMP);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_OVERTAKE);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_CUT);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
      }
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_WALL_JUMP);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_OVERTAKE);
    bVar1 = lib::L2CValue::operator__(pLVar5,aLStack80);
    bVar1 = bVar1 ^ 1;
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    bVar1 = 0;
  }
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterCommon::status_end_AirLassoHangCommon(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_FAIL);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_AIR_LASSO_FAILURE);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_WALL);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

