
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::KirbyEnd_main(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x14133acb36);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xf4187eccb);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_KIRBY_ATTACK_BLOCKED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
    uVar4 = lib::L2CValue::as_integer(this_00);
    uVar4 = app::sv_battle_object::get_founder_id(uVar4);
    lib::L2CValue::L2CValue(aLStack80,uVar4);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                      (FIGHTER_INSTANCE_WORK_ID_INT_SCALING_STATUS,uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar7);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_KIRBY_STATUS_SPECIAL_N_FLAG_ATTACK_BLOCKED)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(pBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack96,0x1d7584e322);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,KirbyEnd_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

