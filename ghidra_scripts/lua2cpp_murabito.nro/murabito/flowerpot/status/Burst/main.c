
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoFlowerpot::status::Burst_main
          (L2CWeaponMurabitoFlowerpot *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIND_MURABITO_FLOWERPOT);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIND_SHIZUE_POT);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_7100033d6c;
    lib::L2CValue::L2CValue(aLStack112,0x1781009bcb);
    lib::L2CValue::L2CValue(aLStack128,true);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    bVar2 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    iVar5 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
                       (bool)(bVar3 & 1),false,0);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x18ee354e40);
    lib::L2CValue::L2CValue(aLStack128,true);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    bVar2 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    iVar5 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
                       (bool)(bVar3 & 1),false,0);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100033d6c:
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x57d3ea0b0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar8 = lib::L2CValue::as_hash(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  fVar10 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_BOUND);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar4 & 1U) != 0) {
    app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_BOUND);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,Burst_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

