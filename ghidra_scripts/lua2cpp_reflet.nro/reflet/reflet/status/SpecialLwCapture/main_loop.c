
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialLwCapture_main_loop(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  AttackData *pAVar6;
  L2CValue *this_00;
  void *pvVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_ATTACK_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1);
  uVar5 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar5 & 1) == 0) {
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_SERIAL_HIT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      pAVar6 = (AttackData *)
               app::lua_bind::AttackModule__attack_data_impl
                         (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
      app::lua_bind::AttackData__store_l2c_table_impl(pAVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1196f0150a);
      uVar5 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_40);
      if ((uVar5 & 1) == 0) {
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
        app::lua_bind::AttackModule__set_serial_hit_frame_impl(this->moduleAccessor,iVar3,uVar4);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,uVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack144,uVar4 & 0xff);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_40,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_40,pvVar7);
        }
        lib::L2CValue::L2CValue(aLStack160,0xc28b70a0b);
        lib::L2CValue::L2CValue(aLStack176,0);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_40);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar9,uVar5,uVar8);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::operator_(aLStack128,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      }
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar11 = lib::L2CValue::as_number(aLStack128);
      uVar12 = lib::L2CValue::as_number(aLStack128);
      uVar13 = lib::L2CValue::as_number(aLStack128);
      local_40 = CONCAT44(uVar12,uVar11);
      uStack56 = (ulong)uVar13;
      app::lua_bind::EffectModule__set_scale_impl(this->moduleAccessor,uVar4,(Vector3f *)&local_40);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  FUN_7100007080(this,&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

