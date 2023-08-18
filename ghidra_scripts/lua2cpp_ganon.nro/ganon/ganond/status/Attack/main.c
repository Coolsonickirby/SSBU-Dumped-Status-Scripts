
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGanonGanond::status::Attack_main(L2CWeaponGanonGanond *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&GROUND_TOUCH_FLAG_LEFT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar6);
      }
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      iVar3 = app::lua_bind::StatusModule__situation_kind_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xac5f6086f);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x647c02d3b);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar9 = aLStack112;
      goto LAB_7100018dd0;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0x647c02d3b);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar8 = lib::L2CValue::as_hash(aLStack80);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar9 = aLStack80;
LAB_7100018dd0:
  lib::L2CValue::_L2CValue(pLVar9);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100019010(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100019310);
  lib::L2CValue::operator_(pLVar9,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Attack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

