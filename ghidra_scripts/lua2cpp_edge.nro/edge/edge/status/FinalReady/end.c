
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::FinalReady_end(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Vector4f VVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  ulong uVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_FINAL_SCENE01);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_FINAL_MODULE_READY_EXIT);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Edge::call_final_module(pFVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    app::lua_bind::FighterManager__exit_movie_impl(LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_FINAL_MODULE_READY_EXIT);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Edge::call_final_module(pFVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack112,0xd74c6f5cd);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar7 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack128,0xd191b1126);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack144,0xd6971e5a9);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,255.0);
    lib::L2CValue::as_number(aLStack80);
    lib::L2CValue::as_number(aLStack96);
    lib::L2CValue::as_number(aLStack112);
    VVar3 = lib::L2CValue::as_number(aLStack128);
    app::FighterUtil::renderer_set_clear_color(VVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,true);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::FighterUtil::renderer_set_enable_clear_color_setting((bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

