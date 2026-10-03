
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e6a0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *this;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  long lVar12;
  Hash40 HVar13;
  float fVar14;
  undefined8 uVar15;
  float in_register_00005008;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  ulong auStack368 [2];
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
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)auStack368,true);
  uVar7 = lib::L2CValue::operator==(param_3,(L2CValue *)auStack368);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  if ((uVar7 & 1) == 0) goto LAB_710000f028;
  lib::L2CValue::L2CValue((L2CValue *)auStack368,_FIGHTER_EFLAME_STATUS_FINAL_INT_MAP_COLL_COUNT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0xb54dafbfb);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x153b9338cc);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack368);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  uVar7 = lib::L2CValue::operator<(aLStack112,aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_EFLAME_STATUS_FINAL_FLAG_UPDATE_GROUND_COLLISION_SHAPE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)auStack368,true);
    uVar7 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)auStack368);
    lib::L2CValue::~L2CValue((L2CValue *)auStack368);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack368,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack368);
      bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      uVar5 = app::lua_bind::GroundModule__ground_touch_flag_ex_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(bool)(bVar1 & 1),
                         (bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack144,uVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::L2CValue(aLStack160,false);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack368,_GROUND_TOUCH_FLAG_DOWN_LEFT | _GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator&(aLStack144,(L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,0);
      uVar7 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack368,_GROUND_TOUCH_FLAG_DOWN_RIGHT | GROUND_TOUCH_FLAG_RIGHT);
        lib::L2CValue::operator&(aLStack144,(L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::L2CValue((L2CValue *)auStack368,0);
        uVar7 = lib::L2CValue::operator==(aLStack176,(L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack368,true);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack368);
          this = auStack368;
          goto LAB_710000e954;
        }
      }
      else {
        this = &local_60;
LAB_710000e954:
        lib::L2CValue::~L2CValue((L2CValue *)this);
      }
      lib::L2CValue::L2CValue((L2CValue *)auStack368,false);
      uVar7 = lib::L2CValue::operator==(aLStack160,(L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack368,1);
        lib::L2CValue::operator-(aLStack112,(L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack368,
                   _FIGHTER_EFLAME_STATUS_FINAL_FLAG_UPDATE_GROUND_COLLISION_SHAPE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack368,1);
        lib::L2CValue::operator+(aLStack112,(L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack368,_FIGHTER_EFLAME_STATUS_FINAL_INT_MAP_COLL_COUNT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)auStack368);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4,iVar6);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,0xb54dafbfb);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1120d05587);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack368);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar7,uVar8)
      ;
      lib::L2CValue::L2CValue(aLStack192,fVar14);
      lib::L2CValue::L2CValue(aLStack224,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack240,0x1157d76511);
      uVar7 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar7,uVar8)
      ;
      lib::L2CValue::L2CValue(aLStack208,fVar14);
      lib::L2CValue::L2CValue(aLStack272,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack288,0x11cede34ab);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar7,uVar8)
      ;
      lib::L2CValue::L2CValue(aLStack256,fVar14);
      lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x0);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack368,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_X);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack240,fVar14);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_Y);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack272,fVar14);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_Z);
      iVar4 = lib::L2CValue::as_integer(aLStack304);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack288,fVar14);
      lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x10,(L2CValue)0xf0,(L2CValue)0xe0)
      ;
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::operator/(aLStack112,aLStack128);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      lib::L2CValue::operator-(pLVar10,pLVar11);
      lib::L2CValue::operator*(aLStack304,aLStack320);
      lib::L2CValue::operator+(pLVar9,(L2CValue *)&local_60);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack320);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar10,pLVar11);
      lib::L2CValue::operator*(aLStack304,aLStack320);
      lib::L2CValue::operator+(pLVar9,(L2CValue *)&local_60);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack320);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
      lib::L2CValue::operator-(pLVar10,pLVar11);
      lib::L2CValue::operator*(aLStack304,aLStack320);
      lib::L2CValue::operator+(pLVar9,(L2CValue *)&local_60);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack384,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack400,0xe22a27e23);
      uVar7 = lib::L2CValue::as_integer(aLStack384);
      uVar8 = lib::L2CValue::as_integer(aLStack400);
      lVar12 = app::lua_bind::WorkModule__get_param_int64_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack320,lVar12);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
      HVar13 = lib::L2CValue::as_hash(aLStack320);
      uVar7 = lib::L2CValue::as_number(pLVar9);
      lVar12 = lib::L2CValue::as_number(pLVar10);
      uVar5 = lib::L2CValue::as_number(pLVar11);
      local_60 = uVar7 & 0xffffffff | lVar12 << 0x20;
      uStack88 = (ulong)uVar5;
      uVar15 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar13,
                          (Vector3f *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,(float)uVar15);
      lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar15 >> 0x20));
      lib::L2CValue::L2CValue(aLStack336,in_register_00005008);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue((L2CValue *)auStack368);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_710000f028:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_EFLAME_STATUS_FINAL_FLAG_REVERT_GROUND_COLLISION_SHAPE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,(bool)(bVar1 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack368);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack368,
               _FIGHTER_EFLAME_STATUS_FINAL_FLAG_REVERT_GROUND_COLLISION_SHAPE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)auStack368);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack368,
               _FIGHTER_EFLAME_STATUS_FINAL_FLAG_UPDATE_GROUND_COLLISION_SHAPE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)auStack368);
    FUN_710000e100(param_2);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

