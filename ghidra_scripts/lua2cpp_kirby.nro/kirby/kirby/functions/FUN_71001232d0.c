
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001232d0(void *param_1)

{
  L2CValue LVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor *pBVar11;
  Vector2f VVar12;
  Vector3f VVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  LVar1 = SUB81(&stack0xfffffffffffffff0,0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)((char)LVar1 + '\x10'),LVar1);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLOAT_GENERATE_BLOCK_POS_X);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar14 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLOAT_GENERATE_BLOCK_POS_Y);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  uVar17 = lib::L2CValue::as_number(pLVar6);
  uVar16 = lib::L2CValue::as_number(pLVar7);
  local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
  uStack88 = 0;
  uVar18 = app::pickelobject::grid_position((Vector2f *)&local_60);
  lib::L2CValue::L2CValue(aLStack320,(float)uVar18);
  lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack304);
  lua2cpp::L2CFighterBase::Vector2__create
            (param_1,(L2CValue)((char)LVar1 + -0x50),(L2CValue)((char)LVar1 + -0x60));
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  FUN_7100125640(aLStack336,param_1);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack336);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar3 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack352,false);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      uVar17 = lib::L2CValue::as_number(pLVar6);
      uVar16 = lib::L2CValue::as_number(pLVar7);
      local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
      uStack88 = 0;
      uVar16 = app::pickelobject::get_battle_object_id_from_grid_pos((Vector2f *)&local_60);
      lib::L2CValue::L2CValue(aLStack368,uVar16);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      uVar17 = lib::L2CValue::as_number(pLVar6);
      uVar16 = lib::L2CValue::as_number(pLVar7);
      local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
      uStack88 = 0;
      bVar3 = app::pickelobject::is_grid_blank((Vector2f *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
        uVar17 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar17 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
          uVar17 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0xffffffff);
            uVar17 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar17 & 1) == 0) {
              pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
              pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
              VVar12 = (Vector2f)0x15;
              pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
              pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
              lib::L2CValue::as_number(pLVar7);
              lib::L2CValue::as_number(pLVar10);
              bVar3 = app::FighterSpecializer_Pickel::get_pickelobject_generate_forbid_status
                                (pBVar11,VVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
                lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_60);
                goto LAB_7100123638;
              }
            }
          }
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
        lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_60);
LAB_7100123638:
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack352);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack432,false);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
        uVar17 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar17 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
          uVar17 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0xffffffff);
            uVar17 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar17 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
              lib::L2CValue::operator=(aLStack432,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            }
          }
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
        uVar17 = lib::L2CValue::operator==(aLStack432,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar17 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar14,iVar4,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0x12ef89b9c7);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_70);
            app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
                      (*ppBVar14,iVar4,HVar8,0.0,1.0,false,false,0.0,true,true,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _FIGHTER_PICKEL_STATUS_SPECIAL_N3_INT_GENERATE_PICKELOBJECT_FAILURE_COUNT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__inc_int_impl(*ppBVar14,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack448,pLVar6);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack464,pLVar6);
          FUN_71001260c0(param_1,aLStack448,aLStack464);
          lib::L2CValue::~L2CValue(aLStack464);
          lib::L2CValue::~L2CValue(aLStack448);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack480,pLVar6);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack496,pLVar6);
          lib::L2CValue::L2CValue(aLStack144,0x18bf290801);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,1.0);
          HVar8 = lib::L2CValue::as_hash(aLStack144);
          uVar17 = lib::L2CValue::as_number(aLStack480);
          lVar19 = lib::L2CValue::as_number(aLStack496);
          uVar16 = lib::L2CValue::as_number(aLStack160);
          local_60 = uVar17 & 0xffffffff | lVar19 << 0x20;
          uStack88 = (ulong)uVar16;
          uVar17 = lib::L2CValue::as_number(aLStack176);
          lVar19 = lib::L2CValue::as_number(aLStack192);
          uVar16 = lib::L2CValue::as_number(aLStack208);
          local_70 = uVar17 & 0xffffffff | lVar19 << 0x20;
          uStack104 = (ulong)uVar16;
          fVar15 = (float)lib::L2CValue::as_number(aLStack224);
          uVar16 = app::lua_bind::EffectModule__req_impl
                             (*ppBVar14,HVar8,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar15,0,
                              -1,false,0);
          lib::L2CValue::L2CValue(aLStack128,uVar16);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack496);
          lib::L2CValue::~L2CValue(aLStack480);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x13c9a2df03);
          HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_60);
          app::lua_bind::EffectModule__req_common_impl(*ppBVar14,HVar8,0.0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          FUN_7100126310(param_1);
        }
        pLVar6 = aLStack432;
      }
      else {
        FUN_7100125af0(aLStack144,param_1);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
        uVar17 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar17 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,
                     _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_FORBID_GENERATE_PICKELOBJECT_COUNT);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) == 0) goto LAB_7100123ee4;
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar14,iVar4,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0xaf5156bf9);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_70);
            app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
                      (*ppBVar14,iVar4,HVar8,0.0,1.0,false,false,0.0,true,true,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,
                       _FIGHTER_PICKEL_STATUS_SPECIAL_N3_INT_GENERATE_PICKELOBJECT_FAILURE_COUNT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::L2CValue(aLStack384,aLStack144);
          FUN_7100125d20(param_1,aLStack384);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
        else {
LAB_7100123ee4:
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar14,iVar4,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x7fb997a80);
          uVar17 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar17 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0xfe5104c88);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_70);
            app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
                      (*ppBVar14,iVar4,HVar8,0.0,1.0,false,false,0.0,true,true,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,
                       _FIGHTER_PICKEL_STATUS_SPECIAL_N3_INT_GENERATE_PICKELOBJECT_FAILURE_COUNT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack400,pLVar6);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack416,pLVar6);
          FUN_71001260c0(param_1,aLStack400,aLStack416);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack400);
          FUN_7100126310(param_1);
        }
        pLVar6 = aLStack144;
      }
      lib::L2CValue::~L2CValue(pLVar6);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar3 = app::lua_bind::MotionModule__is_end_partial_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      FUN_7100125af0(&local_60,param_1);
      lib::L2CValue::L2CValue(aLStack512,(L2CValue *)&local_60);
      FUN_7100125d20(param_1,aLStack512);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar18 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar14,-1);
  lib::L2CValue::L2CValue(aLStack544,(float)uVar18);
  lib::L2CValue::L2CValue(aLStack528,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack544);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack528);
  lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lua2cpp::L2CFighterBase::Vector3__create
            (param_1,(L2CValue)((char)LVar1 + -0x50),(L2CValue)((char)LVar1 + -0x60),
             (L2CValue)((char)LVar1 + -0x70));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_OBJECT_FALL);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lVar19 = -0x60;
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack208,0x2ab06c21c6);
    uVar17 = lib::L2CValue::as_integer(aLStack160);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar17,uVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar15);
    lib::L2CValue::operator-(aLStack144);
    uVar17 = lib::L2CValue::operator<(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar17 & 1) == 0) goto LAB_71001243a8;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_OBJECT_FALL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
    lVar19 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar19));
LAB_71001243a8:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_OBJECT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_OBJECT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_ENABLE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_ENABLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_OBJECT_FALL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_GENERATE_OBJECT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_SPECIAL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ITEM);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_CATCH);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ATTACK);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ESCAPE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_GUARD);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ITEM_THROW);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LASSO);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ATTACK)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_TREAD_JUMP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_JUMP_AERIAL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar14,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      FUN_7100125af0(aLStack208,param_1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      uVar17 = lib::L2CValue::operator==(aLStack208,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar17 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        uVar17 = lib::L2CValue::as_number(pLVar6);
        uVar16 = lib::L2CValue::as_number(pLVar7);
        local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
        uStack88 = 0;
        bVar3 = app::pickelobject::is_grid_blank((Vector2f *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          uVar17 = lib::L2CValue::as_number(pLVar6);
          uVar16 = lib::L2CValue::as_number(pLVar7);
          local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
          uStack88 = 0;
          uVar16 = app::pickelobject::get_battle_object_id_from_grid_pos((Vector2f *)&local_60);
          lib::L2CValue::L2CValue(aLStack224,uVar16);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
          uVar17 = lib::L2CValue::operator==(aLStack224,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
            uVar17 = lib::L2CValue::operator==(aLStack224,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar17 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0xffffffff);
              uVar17 = lib::L2CValue::operator==(aLStack224,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              if ((uVar17 & 1) == 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
                pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
                VVar12 = (Vector2f)0x15;
                pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
                pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
                lib::L2CValue::as_number(pLVar7);
                lib::L2CValue::as_number(pLVar10);
                bVar3 = app::FighterSpecializer_Pickel::get_pickelobject_generate_forbid_status
                                  (pBVar11,VVar12);
                lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
                bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
                lib::L2CValue::~L2CValue((L2CValue *)&local_60);
                if ((bVar2 & 1U) != 0) {
                  lib::L2CValue::L2CValue(aLStack576,aLStack208);
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
                  lib::L2CValue::L2CValue(aLStack592,pLVar6);
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
                  lib::L2CValue::L2CValue(aLStack608,pLVar6);
                  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack576);
                  lib::L2CValue::L2CValue(aLStack128,true);
                  lib::L2CValue::L2CValue(aLStack144,aLStack592);
                  lib::L2CValue::L2CValue(aLStack160,aLStack608);
                  FUN_71001263c0(&local_60,param_1,&local_70,aLStack128,aLStack144,aLStack160);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
                  lib::L2CValue::~L2CValue(aLStack160);
                  lib::L2CValue::~L2CValue(aLStack144);
                  lib::L2CValue::~L2CValue(aLStack128);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
                  lib::L2CValue::~L2CValue(aLStack608);
                  lib::L2CValue::~L2CValue(aLStack592);
                  lib::L2CValue::~L2CValue(aLStack576);
                }
              }
            }
          }
          pLVar6 = aLStack224;
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          VVar13 = (Vector3f)0x15;
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::as_number(pLVar6);
          lib::L2CValue::as_number(pLVar7);
          lib::L2CValue::as_number((L2CValue *)&local_60);
          app::lua_bind::ArticleModule__set_generate_item_pos_impl(*ppBVar14,VVar13);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue(aLStack560,aLStack208);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack560);
          lib::L2CValue::L2CValue(aLStack128,false);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          FUN_71001263c0(&local_60,param_1,&local_70,aLStack128,aLStack144,aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          pLVar6 = aLStack560;
        }
        lib::L2CValue::~L2CValue(pLVar6);
      }
      lib::L2CValue::~L2CValue(aLStack208);
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CHECK_REQ_MISS_EFFECT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CHECK_REQ_MISS_EFFECT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
    uVar17 = lib::L2CValue::as_number(pLVar6);
    uVar16 = lib::L2CValue::as_number(pLVar7);
    local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
    uStack88 = 0;
    bVar3 = app::pickelobject::is_grid_blank((Vector2f *)&local_60);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar17 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar17 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      uVar17 = lib::L2CValue::as_number(pLVar6);
      uVar16 = lib::L2CValue::as_number(pLVar7);
      local_60 = uVar17 & 0xffffffff | (ulong)uVar16 << 0x20;
      uStack88 = 0;
      uVar16 = app::pickelobject::get_battle_object_id_from_grid_pos((Vector2f *)&local_60);
      lib::L2CValue::L2CValue(aLStack128,uVar16);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
      uVar17 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar17 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
        uVar17 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar17 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0xffffffff);
          uVar17 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar17 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
            lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          }
        }
      }
      lib::L2CValue::~L2CValue(aLStack128);
    }
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack624,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack640,pLVar6);
      FUN_71001260c0(param_1,aLStack624,aLStack640);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  return;
}

