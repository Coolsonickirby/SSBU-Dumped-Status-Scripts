
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::FinalScene03_end(L2CFighterDolly *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  Fighter *pFVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_FINAL_MODULE_SCENE_03_EXIT);
  pFVar3 = (Fighter *)lib::L2CValue::as_pointer(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Dolly::call_final_module(pFVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_KIND_FINAL_SCENE04);
  uVar4 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    app::lua_bind::FighterManager__exit_finalbg_impl(LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DOLLY_STATUS_FINAL_WORK_FLOAT_SCALE_BASE);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar5,false);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_INIT_PITCH);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::SoundModule__set_auto_se_pitch_impl(this->moduleAccessor,fVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

