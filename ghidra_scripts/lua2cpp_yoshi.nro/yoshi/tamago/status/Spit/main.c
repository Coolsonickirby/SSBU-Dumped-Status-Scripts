
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponYoshiTamago::status::Spit_main(L2CWeaponYoshiTamago *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  GroundCorrectShapeType GVar6;
  Hash40 HVar7;
  ulong uVar8;
  void *pvVar9;
  Rhombus2 *pRVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  BattleObjectModuleAccessor *pBVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  undefined8 uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLAG_EVENT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0x4ef68ddf5);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_100);
    fVar15 = (float)lib::L2CValue::as_number(aLStack96);
    fVar16 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar15,fVar16,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0xd68068fd4);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,true);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_100);
    fVar15 = (float)lib::L2CValue::as_number(aLStack96);
    fVar16 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar15,fVar16,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) goto LAB_710002dbc0;
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  uVar4 = app::lua_bind::LinkModule__get_parent_object_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,uVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,false);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar8 & 1) == 0) {
LAB_710002dbb0:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack112,uVar4 & 0xff);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar9 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,pvVar9);
        }
        pRVar10 = (Rhombus2 *)
                  app::lua_bind::GroundModule__get_rhombus_impl(this->moduleAccessor,true);
        app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar10);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x24394ee70);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(pLVar11,0x1fbdb2615);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x41cff903b);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(pLVar12,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar11,pLVar12);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x5b4ca7514);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(pLVar11,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x47a67e768);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(pLVar12,0x18cdc1683);
        lib::L2CValue::operator_(pLVar11,pLVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,2.0);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_100);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        iVar3 = app::lua_bind::GroundModule__get_shape_kind_impl(pBVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,iVar3);
        lib::L2CValue::L2CValue
                  (aLStack208,
                   _WEAPON_YOSHI_TAMAGO_STATUS_SPIT_WORK_INT_GROUND_CORRECT_SHAPE_TYPE_BACKUP);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,_GRCORRECT_SHAPE_RHOMBUS);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_100);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::GroundModule__set_shape_kind_impl(pBVar13,GVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::operator_(aLStack144,aLStack192);
        lib::L2CValue::operator_(aLStack176,aLStack192);
        fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
        fVar16 = (float)lib::L2CValue::as_number(aLStack160);
        fVar17 = (float)lib::L2CValue::as_number(aLStack208);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::GroundModule__modify_rhombus_impl(pBVar13,fVar15,fVar16,fVar17);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack224);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        uVar18 = app::lua_bind::PostureModule__pos_2d_impl(pBVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
        lib::L2CValue::operator_(aLStack224,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::L2CValue(aLStack272);
        lib::L2CValue::L2CValue(aLStack288);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        pfVar14 = (float *)app::lua_bind::GroundModule__get_shape_safe_pos_impl(pBVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar14);
        lib::L2CValue::L2CValue(aLStack240,pfVar14[1]);
        lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_100);
        lib::L2CValue::operator_(aLStack288,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        uVar8 = lib::L2CValue::as_number(aLStack208);
        uVar4 = lib::L2CValue::as_number(aLStack224);
        local_100 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
        uStack248 = 0;
        app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_100);
        uVar8 = lib::L2CValue::as_number(aLStack272);
        uVar4 = lib::L2CValue::as_number(aLStack288);
        local_100 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
        uStack248 = 0;
        app::lua_bind::GroundModule__set_shape_safe_pos_impl
                  (this->moduleAccessor,(Vector2f *)&local_100);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_710002dbb0;
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710002dbc0:
  lib::L2CValue::L2CValue((L2CValue *)&local_100,Spit_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  return;
}

