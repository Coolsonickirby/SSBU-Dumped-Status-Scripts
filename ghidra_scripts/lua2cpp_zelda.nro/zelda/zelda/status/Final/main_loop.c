
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterZelda::status::Final_main_loop(L2CFighterZelda *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CAgent *this_00;
  L2CValue *pLVar6;
  L2CValue *in_x2;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  void **ppvStack64;
  lua_State *plStack56;
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710000c814;
    fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ZELDA_STATUS_FINAL_WORK_FLOAT_MOVE_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    pLVar6 = aLStack112;
    lib::L2CValue::operator_(aLStack96,pLVar6);
    lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,1e-05);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    if ((uVar5 & 1) != 0) {
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      lib::L2CValue::operator_(aLStack112);
      this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x30,0xa9e892552);
      lib::L2CAgent::math_min(this_00,aLStack80,in_x2);
      lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar8 = lib::L2CValue::as_number(aLStack96);
      uVar9 = lib::L2CValue::as_number(aLStack112);
      uVar10 = lib::L2CValue::as_number(aLStack128);
      ppvStack64 = (void **)CONCAT44(uVar9,uVar8);
      plStack56 = (lua_State *)(ulong)uVar10;
      app::lua_bind::PostureModule__add_pos_impl
                (this->moduleAccessor,(Vector3f *)&stack0xffffffffffffffc0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    pLVar6 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&stack0xffffffffffffffc0,_FIGHTER_ZELDA_STATUS_KIND_FINAL_LOOP);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_ZELDA_TRIFORCE_STATUS_KIND_INHALE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710000c814:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

