
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPeach::status::Final_exit(L2CFighterPeach *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ItemKind IVar4;
  uint uVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CTable *this_01;
  Hash40 HVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_STATUS_FINAL_FLAG_IS_ROCKET_BELT_ATTACHED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_ITEM_KIND_ROCKETBELT);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,true);
    IVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    bVar1 = app::lua_bind::ItemModule__attach_item_impl
                      (this->moduleAccessor,IVar4,iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      this_01 = (L2CTable *)operator_new(0x48);
      lib::L2CTable::L2CTable(this_01,0);
      lib::L2CValue::L2CValue(aLStack80,this_01);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_EFFECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,1);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_LEFT_EFFECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,2);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_RIGHT_EFFECT_ID)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,3);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,1);
      uVar5 = lib::L2CValue::as_integer(pLVar7);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,1);
        uVar5 = lib::L2CValue::as_integer(pLVar7);
        app::lua_bind::EffectModule__remove_impl(this->moduleAccessor,uVar5,0);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,2);
      uVar5 = lib::L2CValue::as_integer(pLVar7);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,2);
        uVar5 = lib::L2CValue::as_integer(pLVar7);
        app::lua_bind::EffectModule__remove_impl(this->moduleAccessor,uVar5,0);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,3);
      uVar5 = lib::L2CValue::as_integer(pLVar7);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,3);
        uVar5 = lib::L2CValue::as_integer(pLVar7);
        app::lua_bind::EffectModule__remove_impl(this->moduleAccessor,uVar5,0);
      }
      lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_EFFECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_LEFT_EFFECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_RIGHT_EFFECT_ID)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x107d51e1f6);
        HVar9 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar9,0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x102c3f205a);
        HVar9 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar9,0);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

