
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::FinalReady_end(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  ushort uVar2;
  int iVar3;
  Vector4f VVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Fighter *pFVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_FINAL_SCENE01);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_FINAL_MODULE_READY_EXIT);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Pickel::call_final_module(pFVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    app::lua_bind::FighterManager__exit_movie_impl(LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_FINAL_FLOAT_MOVIE_RATE);
    fVar9 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_FINAL_MODULE_READY_EXIT);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Pickel::call_final_module(pFVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack112,0xd74c6f5cd);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack128,0xd191b1126);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack144,0xd6971e5a9);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,255.0);
    lib::L2CValue::as_number(aLStack80);
    lib::L2CValue::as_number(aLStack96);
    lib::L2CValue::as_number(aLStack112);
    VVar4 = lib::L2CValue::as_number(aLStack128);
    app::FighterUtil::renderer_set_clear_color(VVar4);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,true);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::FighterUtil::renderer_set_enable_clear_color_setting((bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_GENERATE_ARTICLE_PUSHFINAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

