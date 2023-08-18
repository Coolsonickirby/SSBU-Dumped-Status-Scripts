
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::FinalScene01_end(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Fighter *pFVar5;
  float fVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_FINAL_END);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::FighterUtil::renderer_set_enable_clear_color_setting((bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_FINAL_MODULE_SCENE_01_EXIT);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Edge::call_final_module(pFVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_FINAL_FLOAT_SCALE_BASE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_INIT_PITCH);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::SoundModule__set_auto_se_pitch_impl(this->moduleAccessor,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

