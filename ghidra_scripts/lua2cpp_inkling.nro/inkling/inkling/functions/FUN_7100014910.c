
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014910(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  EColorKind EVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  Hash40 HVar12;
  Hash40 HVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  undefined8 uVar20;
  int in_stack_fffffffffffffcf4;
  undefined in_stack_fffffffffffffcfc;
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  ulong local_290;
  ulong uStack648;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),2);
  uVar3 = lib::L2CValue::as_integer(pLVar7);
  iVar4 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,iVar4);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  ppBVar14 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack160,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0xdf05c072b);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x7ae071a51);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack176,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,3.0);
  lib::L2CValue::L2CValue(aLStack240,2.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_UV);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack256,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_PUMP);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack272,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_MAX);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack288,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0);
  uVar8 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  if ((uVar8 & 1) == 0) {
    uVar8 = lib::L2CValue::operator<=(aLStack176,aLStack160);
    if ((uVar8 & 1) == 0) goto LAB_710001545c;
    uVar3 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_290,false);
    uVar8 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) == 0) goto LAB_710001545c;
    lib::L2CValue::L2CValue(aLStack320,0x11ae0105f1);
    lib::L2CValue::L2CValue(aLStack336,0x570211ebd);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,1.0);
    lib::L2CValue::L2CValue(aLStack416,false);
    lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
    HVar12 = lib::L2CValue::as_hash(aLStack320);
    HVar13 = lib::L2CValue::as_hash(aLStack336);
    uVar8 = lib::L2CValue::as_number(pLVar7);
    lVar19 = lib::L2CValue::as_number(pLVar10);
    uVar3 = lib::L2CValue::as_number(pLVar11);
    local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack648 = (ulong)uVar3;
    uVar8 = lib::L2CValue::as_number(aLStack352);
    lVar19 = lib::L2CValue::as_number(aLStack368);
    uVar3 = lib::L2CValue::as_number(aLStack384);
    local_90 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack136 = (ulong)uVar3;
    fVar15 = (float)lib::L2CValue::as_number(aLStack400);
    bVar1 = lib::L2CValue::as_bool(aLStack416);
    uVar3 = lib::L2CValue::as_integer(aLStack432);
    uVar3 = app::lua_bind::EffectModule__req_follow_impl
                      (*ppBVar14,HVar12,HVar13,(Vector3f *)&local_290,(Vector3f *)&local_90,fVar15,
                       (bool)(bVar1 & 1),uVar3,0,-1,in_stack_fffffffffffffcf4,0,
                       (bool)in_stack_fffffffffffffcfc,false);
    lib::L2CValue::L2CValue(aLStack304,uVar3);
    lib::L2CValue::operator=(aLStack288,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack544,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_R);
    lib::L2CValue::L2CValue(aLStack560,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_G);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_B);
    FUN_7100003500(param_1,aLStack544,aLStack560,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,0x12c6fa3fc4);
    HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_290);
    app::lua_bind::EffectModule__kill_kind_impl(*ppBVar14,HVar12,true,true);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,0x14cc894fdf);
    HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_290);
    app::lua_bind::EffectModule__kill_kind_impl(*ppBVar14,HVar12,true,true);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,-1);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_PUMP)
    ;
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_MAX)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack288);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,-1);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,
               _FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_MARKER);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,0x10decdd628);
    lib::L2CValue::L2CValue(aLStack336,0x570211ebd);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,1.0);
    lib::L2CValue::L2CValue(aLStack416,false);
    lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
    HVar12 = lib::L2CValue::as_hash(aLStack320);
    HVar13 = lib::L2CValue::as_hash(aLStack336);
    uVar8 = lib::L2CValue::as_number(pLVar7);
    lVar19 = lib::L2CValue::as_number(pLVar10);
    uVar3 = lib::L2CValue::as_number(pLVar11);
    local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack648 = (ulong)uVar3;
    uVar8 = lib::L2CValue::as_number(aLStack352);
    lVar19 = lib::L2CValue::as_number(aLStack368);
    uVar3 = lib::L2CValue::as_number(aLStack384);
    local_90 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack136 = (ulong)uVar3;
    fVar15 = (float)lib::L2CValue::as_number(aLStack400);
    bVar1 = lib::L2CValue::as_bool(aLStack416);
    uVar3 = lib::L2CValue::as_integer(aLStack432);
    uVar3 = app::lua_bind::EffectModule__req_follow_impl
                      (*ppBVar14,HVar12,HVar13,(Vector3f *)&local_290,(Vector3f *)&local_90,fVar15,
                       (bool)(bVar1 & 1),uVar3,0,-1,in_stack_fffffffffffffcf4,0,
                       (bool)in_stack_fffffffffffffcfc,false);
    lib::L2CValue::L2CValue(aLStack304,uVar3);
    lib::L2CValue::operator=(aLStack256,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack448,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_R);
    lib::L2CValue::L2CValue(aLStack464,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_G);
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_B);
    FUN_7100003500(param_1,aLStack448,aLStack464,aLStack480);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::L2CValue(aLStack320,0x12c6fa3fc4);
    lib::L2CValue::L2CValue(aLStack336,0x570211ebd);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,1.0);
    lib::L2CValue::L2CValue(aLStack416,false);
    lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
    HVar12 = lib::L2CValue::as_hash(aLStack320);
    HVar13 = lib::L2CValue::as_hash(aLStack336);
    uVar8 = lib::L2CValue::as_number(pLVar7);
    lVar19 = lib::L2CValue::as_number(pLVar10);
    uVar3 = lib::L2CValue::as_number(pLVar11);
    local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack648 = (ulong)uVar3;
    uVar8 = lib::L2CValue::as_number(aLStack352);
    lVar19 = lib::L2CValue::as_number(aLStack368);
    uVar3 = lib::L2CValue::as_number(aLStack384);
    local_90 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack136 = (ulong)uVar3;
    fVar15 = (float)lib::L2CValue::as_number(aLStack400);
    bVar1 = lib::L2CValue::as_bool(aLStack416);
    uVar3 = lib::L2CValue::as_integer(aLStack432);
    uVar3 = app::lua_bind::EffectModule__req_follow_impl
                      (*ppBVar14,HVar12,HVar13,(Vector3f *)&local_290,(Vector3f *)&local_90,fVar15,
                       (bool)(bVar1 & 1),uVar3,0,-1,in_stack_fffffffffffffcf4,0,
                       (bool)in_stack_fffffffffffffcfc,false);
    lib::L2CValue::L2CValue(aLStack304,uVar3);
    lib::L2CValue::operator=(aLStack272,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack496,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_R);
    lib::L2CValue::L2CValue(aLStack512,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_G);
    lib::L2CValue::L2CValue(aLStack528,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_B);
    FUN_7100003500(param_1,aLStack496,aLStack512,aLStack528);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_UV);
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_PUMP
              );
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
LAB_710001545c:
  lib::L2CValue::operator/(aLStack160,aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0.5);
  lib::L2CValue::operator-((L2CValue *)&local_90,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  uVar3 = lib::L2CValue::as_integer(aLStack256);
  uVar8 = lib::L2CValue::as_number((L2CValue *)&local_90);
  uVar16 = lib::L2CValue::as_number(aLStack304);
  local_290 = uVar8 & 0xffffffff | (ulong)uVar16 << 0x20;
  uStack648 = 0;
  app::lua_bind::EffectModule__set_custom_uv_offset_impl(*ppBVar14,uVar3,(Vector2f *)&local_290,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_MARKER
            );
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack320,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  uVar3 = lib::L2CValue::as_integer(aLStack320);
  bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_290,false);
  uVar8 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack352,0x14cc894fdf);
    lib::L2CValue::L2CValue(aLStack368,0x570211ebd);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    fVar17 = 0.0;
    lib::L2CValue::L2CValue(aLStack432,1.0);
    lib::L2CValue::L2CValue(aLStack592,false);
    lib::L2CValue::L2CValue(aLStack608,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
    HVar12 = lib::L2CValue::as_hash(aLStack352);
    HVar13 = lib::L2CValue::as_hash(aLStack368);
    uVar8 = lib::L2CValue::as_number(pLVar7);
    lVar19 = lib::L2CValue::as_number(pLVar10);
    uVar3 = lib::L2CValue::as_number(pLVar11);
    local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack648 = (ulong)uVar3;
    uVar8 = lib::L2CValue::as_number(aLStack384);
    lVar19 = lib::L2CValue::as_number(aLStack400);
    uVar3 = lib::L2CValue::as_number(aLStack416);
    local_90 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack136 = (ulong)uVar3;
    fVar15 = (float)lib::L2CValue::as_number(aLStack432);
    bVar1 = lib::L2CValue::as_bool(aLStack592);
    uVar3 = lib::L2CValue::as_integer(aLStack608);
    uVar3 = app::lua_bind::EffectModule__req_follow_impl
                      (*ppBVar14,HVar12,HVar13,(Vector3f *)&local_290,(Vector3f *)&local_90,fVar15,
                       (bool)(bVar1 & 1),uVar3,0,-1,in_stack_fffffffffffffcf4,0,
                       (bool)in_stack_fffffffffffffcfc,false);
    lib::L2CValue::L2CValue(aLStack336,uVar3);
    lib::L2CValue::operator=(aLStack320,aLStack336);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_INSTANCE_WORK_ID_INT_COLOR);
    iVar4 = lib::L2CValue::as_integer(aLStack384);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue(aLStack368,iVar4);
    lib::L2CValue::L2CValue(aLStack400,0xfc3178528);
    EVar6 = lib::L2CValue::as_integer(aLStack368);
    HVar12 = lib::L2CValue::as_hash(aLStack400);
    uVar20 = app::FighterUtil::get_effect_team_color(EVar6,HVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,(float)uVar20);
    lib::L2CValue::L2CValue(aLStack640,(float)((ulong)uVar20 >> 0x20));
    lib::L2CValue::L2CValue(aLStack624,fVar17);
    lib::L2CValue::operator=((L2CValue *)&local_90,(L2CValue *)&local_290);
    lib::L2CValue::operator=(aLStack336,aLStack640);
    lib::L2CValue::operator=(aLStack352,aLStack624);
    lib::L2CValue::~L2CValue(aLStack624);
    lib::L2CValue::~L2CValue(aLStack640);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar17 = (float)lib::L2CValue::as_number(aLStack336);
    fVar18 = (float)lib::L2CValue::as_number(aLStack352);
    app::lua_bind::EffectModule__set_rgb_partial_last_impl(*ppBVar14,fVar15,fVar17,fVar18);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_290,
               _FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_EFFECT_HANDLE_MARKER);
    iVar4 = lib::L2CValue::as_integer(aLStack320);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0xdf05c072b);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x12811f8834);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack336,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::operator/(aLStack336,aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0.5);
  lib::L2CValue::operator-((L2CValue *)&local_90,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  uVar3 = lib::L2CValue::as_integer(aLStack320);
  uVar8 = lib::L2CValue::as_number((L2CValue *)&local_90);
  uVar16 = lib::L2CValue::as_number(aLStack352);
  local_290 = uVar8 & 0xffffffff | (ulong)uVar16 << 0x20;
  uStack648 = 0;
  app::lua_bind::EffectModule__set_custom_uv_offset_impl(*ppBVar14,uVar3,(Vector2f *)&local_290,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,4);
  uVar8 = lib::L2CValue::operator<=(param_2,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_290,4);
    lib::L2CValue::operator/(param_2,(L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,0.9);
    lib::L2CValue::operator*(aLStack384,(L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,0.1);
    lib::L2CValue::operator+((L2CValue *)&local_290,aLStack368);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    uVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_number(aLStack368);
      lVar19 = lib::L2CValue::as_number((L2CValue *)&local_90);
      uVar16 = lib::L2CValue::as_number(aLStack384);
      local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
      uStack648 = (ulong)uVar16;
      app::lua_bind::EffectModule__set_scale_impl(*ppBVar14,uVar3,(Vector3f *)&local_290);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
    }
    uVar3 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      uVar3 = lib::L2CValue::as_integer(aLStack272);
      uVar8 = lib::L2CValue::as_number(aLStack368);
      lVar19 = lib::L2CValue::as_number((L2CValue *)&local_90);
      uVar16 = lib::L2CValue::as_number(aLStack384);
      local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
      uStack648 = (ulong)uVar16;
      app::lua_bind::EffectModule__set_scale_impl(*ppBVar14,uVar3,(Vector3f *)&local_290);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
    }
    uVar3 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar8 = lib::L2CValue::as_number(aLStack368);
      lVar19 = lib::L2CValue::as_number((L2CValue *)&local_90);
      uVar16 = lib::L2CValue::as_number(aLStack384);
      local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
      uStack648 = (ulong)uVar16;
      app::lua_bind::EffectModule__set_scale_impl(*ppBVar14,uVar3,(Vector3f *)&local_290);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
    }
    uVar3 = lib::L2CValue::as_integer(aLStack320);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      uVar3 = lib::L2CValue::as_integer(aLStack320);
      uVar8 = lib::L2CValue::as_number(aLStack368);
      lVar19 = lib::L2CValue::as_number((L2CValue *)&local_90);
      uVar16 = lib::L2CValue::as_number(aLStack384);
      local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
      uStack648 = (ulong)uVar16;
      app::lua_bind::EffectModule__set_scale_impl(*ppBVar14,uVar3,(Vector3f *)&local_290);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_FLOAT_PRE_INK);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack368,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  uVar8 = lib::L2CValue::operator<(aLStack368,aLStack336);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = lib::L2CValue::operator<=(aLStack336,aLStack160), (uVar8 & 1) != 0)) {
    lib::L2CValue::L2CValue(aLStack400,0x13ed222ae1);
    lib::L2CValue::L2CValue(aLStack416,0x570211ebd);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack592,0.0);
    lib::L2CValue::L2CValue(aLStack608,0.0);
    lib::L2CValue::L2CValue(aLStack672,1.0);
    lib::L2CValue::L2CValue(aLStack688,false);
    lib::L2CValue::L2CValue(aLStack704,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
    HVar12 = lib::L2CValue::as_hash(aLStack400);
    HVar13 = lib::L2CValue::as_hash(aLStack416);
    uVar8 = lib::L2CValue::as_number(pLVar7);
    lVar19 = lib::L2CValue::as_number(pLVar10);
    uVar3 = lib::L2CValue::as_number(pLVar11);
    local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack648 = (ulong)uVar3;
    uVar8 = lib::L2CValue::as_number(aLStack432);
    lVar19 = lib::L2CValue::as_number(aLStack592);
    uVar3 = lib::L2CValue::as_number(aLStack608);
    local_90 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack136 = (ulong)uVar3;
    fVar15 = (float)lib::L2CValue::as_number(aLStack672);
    bVar1 = lib::L2CValue::as_bool(aLStack688);
    uVar3 = lib::L2CValue::as_integer(aLStack704);
    uVar3 = app::lua_bind::EffectModule__req_follow_impl
                      (*ppBVar14,HVar12,HVar13,(Vector3f *)&local_290,(Vector3f *)&local_90,fVar15,
                       (bool)(bVar1 & 1),uVar3,0,-1,in_stack_fffffffffffffcf4,0,
                       (bool)in_stack_fffffffffffffcfc,false);
    lib::L2CValue::L2CValue(aLStack384,uVar3);
    lib::L2CValue::~L2CValue(aLStack704);
    lib::L2CValue::~L2CValue(aLStack688);
    lib::L2CValue::~L2CValue(aLStack672);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
    lib::L2CValue::operator/(aLStack336,aLStack176);
    lib::L2CValue::L2CValue(aLStack416,1.0);
    uVar3 = lib::L2CValue::as_integer(aLStack384);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_90);
    lVar19 = lib::L2CValue::as_number(aLStack400);
    uVar16 = lib::L2CValue::as_number(aLStack416);
    local_290 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack648 = (ulong)uVar16;
    app::lua_bind::EffectModule__set_scale_impl(*ppBVar14,uVar3,(Vector3f *)&local_290);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,2.0);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_290);
    app::lua_bind::EffectModule__set_rate_last_impl(*ppBVar14,fVar15);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue(aLStack384);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0.0);
  lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_290,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_FLOAT_PRE_INK);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_290);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

