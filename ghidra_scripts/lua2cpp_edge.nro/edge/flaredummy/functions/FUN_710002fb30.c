
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002fb30(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LinkAttribute LVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  Rhombus2 *pRVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 auStack192 [2];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 auStack144 [2];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  ppBVar16 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(*ppBVar16,iVar2,true);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_71000306c8;
  }
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar7);
  }
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(pBVar8);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_NONE);
  uVar6 = lib::L2CValue::operator==((L2CValue *)auStack144,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_50,aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf5c75804b);
      lib::L2CValue::L2CValue(aLStack160,0);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar13 = lib::L2CValue::as_integer(aLStack160);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      lVar14 = app::lua_bind::WorkModule__get_param_int64_impl(pBVar8,uVar6,uVar13);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,lVar14);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack144);
      app::lua_bind::LinkModule__set_model_constraint_target_joint_impl(*ppBVar16,HVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x137b567280);
      lib::L2CValue::L2CValue(aLStack176,0);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar13 = lib::L2CValue::as_integer(aLStack176);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar13);
      lib::L2CValue::L2CValue(aLStack160,fVar17);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x130c514216);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar13 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar13);
      lib::L2CValue::L2CValue(aLStack176,fVar17);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13955813ac);
      lib::L2CValue::L2CValue(aLStack208,0);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar13 = lib::L2CValue::as_integer(aLStack208);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar13);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar17);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      uVar18 = lib::L2CValue::as_number(aLStack160);
      uVar19 = lib::L2CValue::as_number(aLStack176);
      uVar3 = lib::L2CValue::as_number((L2CValue *)auStack192);
      local_50 = CONCAT44(uVar19,uVar18);
      uStack72 = (ulong)uVar3;
      app::lua_bind::LinkModule__set_constraint_translate_offset_impl
                (*ppBVar16,(Vector3f *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
      lib::L2CValue::L2CValue(aLStack208,_LINK_ATTRIBUTE_REFERENCE_PARENT_SCALE);
      lib::L2CValue::L2CValue(aLStack224,true);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      LVar4 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = lib::L2CValue::as_bool(aLStack224);
      app::lua_bind::LinkModule__set_attribute_impl(*ppBVar16,iVar2,LVar4,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_NONE);
      lib::L2CValue::L2CValue(aLStack208,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar5 = lib::L2CValue::as_integer(aLStack208);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar2,iVar5);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      puVar15 = auStack192;
      goto LAB_7100030264;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_YOSHI_EGG);
    uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_CAPTURE_MIMIKKYU);
      uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_GIMMICK_BARREL);
        uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_CAPTURE_KAWASAKI);
          uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((uVar6 & 1) == 0) goto LAB_71000306ac;
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x31ed91fca);
          HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_50);
          app::lua_bind::LinkModule__set_model_constraint_target_joint_impl(*ppBVar16,HVar9);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)auStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          uVar18 = lib::L2CValue::as_number((L2CValue *)auStack144);
          uVar19 = lib::L2CValue::as_number(aLStack160);
          uVar3 = lib::L2CValue::as_number(aLStack176);
          local_50 = CONCAT44(uVar19,uVar18);
          uStack72 = (ulong)uVar3;
          app::lua_bind::LinkModule__set_constraint_translate_offset_impl
                    (*ppBVar16,(Vector3f *)&local_50);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)auStack144);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
          lib::L2CValue::L2CValue((L2CValue *)auStack144,_LINK_ATTRIBUTE_REFERENCE_PARENT_SCALE);
          lib::L2CValue::L2CValue(aLStack160,false);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          LVar4 = lib::L2CValue::as_integer((L2CValue *)auStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::LinkModule__set_attribute_impl(*ppBVar16,iVar2,LVar4,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)auStack144);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_CAPTURE_KAWASAKI);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack144);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar2,iVar5);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x31ed91fca);
          HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_50);
          app::lua_bind::LinkModule__set_model_constraint_target_joint_impl(*ppBVar16,HVar9);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)auStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          uVar18 = lib::L2CValue::as_number((L2CValue *)auStack144);
          uVar19 = lib::L2CValue::as_number(aLStack160);
          uVar3 = lib::L2CValue::as_number(aLStack176);
          local_50 = CONCAT44(uVar19,uVar18);
          uStack72 = (ulong)uVar3;
          app::lua_bind::LinkModule__set_constraint_translate_offset_impl
                    (*ppBVar16,(Vector3f *)&local_50);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)auStack144);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
          lib::L2CValue::L2CValue((L2CValue *)auStack144,_LINK_ATTRIBUTE_REFERENCE_PARENT_SCALE);
          lib::L2CValue::L2CValue(aLStack160,false);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          LVar4 = lib::L2CValue::as_integer((L2CValue *)auStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::LinkModule__set_attribute_impl(*ppBVar16,iVar2,LVar4,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)auStack144);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_GIMMICK_BARREL);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack144);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar2,iVar5);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
        lib::L2CValue::L2CValue((L2CValue *)auStack144,_LINK_ATTRIBUTE_REFERENCE_PARENT_SCALE);
        lib::L2CValue::L2CValue(aLStack160,false);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        LVar4 = lib::L2CValue::as_integer((L2CValue *)auStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::LinkModule__set_attribute_impl(*ppBVar16,iVar2,LVar4,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)auStack144);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_CAPTURE_MIMIKKYU);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack144);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar2,iVar5);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack144);
      puVar15 = &local_50;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x31ed91fca);
      HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_50);
      app::lua_bind::LinkModule__set_model_constraint_target_joint_impl(*ppBVar16,HVar9);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      pRVar10 = (Rhombus2 *)app::lua_bind::GroundModule__get_rhombus_impl(pBVar8,(bool)(bVar1 & 1));
      app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack144,0x24394ee70);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x1fbdb2615);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack144,0x41cff903b);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](pLVar12,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar11,pLVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
      lib::L2CValue::operator/(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack176);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar17 = (float)app::lua_bind::PostureModule__scale_impl(pBVar8);
      lib::L2CValue::L2CValue(aLStack176,fVar17);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator/(aLStack160,aLStack176);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      }
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar18 = lib::L2CValue::as_number((L2CValue *)auStack192);
      uVar19 = lib::L2CValue::as_number(aLStack160);
      uVar3 = lib::L2CValue::as_number(aLStack208);
      local_50 = CONCAT44(uVar19,uVar18);
      uStack72 = (ulong)uVar3;
      app::lua_bind::LinkModule__set_constraint_translate_offset_impl
                (*ppBVar16,(Vector3f *)&local_50);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,_LINK_ATTRIBUTE_REFERENCE_PARENT_SCALE);
      lib::L2CValue::L2CValue(aLStack208,false);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      LVar4 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      bVar1 = lib::L2CValue::as_bool(aLStack208);
      app::lua_bind::LinkModule__set_attribute_impl(*ppBVar16,iVar2,LVar4,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_YOSHI_EGG);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar16,iVar2,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      puVar15 = &local_50;
LAB_7100030264:
      lib::L2CValue::~L2CValue((L2CValue *)puVar15);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      puVar15 = auStack144;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar15);
  }
LAB_71000306ac:
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_71000306c8:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

