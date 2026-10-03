
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b120(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   L2CValue *param_5,void *param_6)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  undefined4 *this;
  code *pcVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined4 auStack336 [4];
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
  undefined4 local_70;
  undefined4 uStack108;
  undefined4 local_68;
  undefined4 uStack100;
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_6 + 200),0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,2.0);
  uVar6 = lib::L2CValue::operator<(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(param_5,false);
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                            (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                            (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_HIT_POS_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar12);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_HIT_POS_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar12);
  lua2cpp::L2CFighterBase::Vector2__create(param_6,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  uVar16 = app::lua_bind::PostureModule__pos_2d_impl
                     (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40));
  lib::L2CValue::L2CValue(aLStack256,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack256);
  lib::L2CValue::L2CValue(aLStack128,aLStack240);
  lua2cpp::L2CFighterBase::Vector2__create(param_6,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack128,aLStack224);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::operator+(pLVar5,aLStack144);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar5,aLStack160);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  local_70 = app::WeaponSpecializer_PikachuVortex::get_camera_clip_bounds();
  uStack108 = param_2;
  local_68 = param_3;
  uStack100 = param_4;
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_70);
  lib::L2CValue::L2CValue(aLStack288,90.0);
  lib::L2CValue::L2CValue(aLStack304,false);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x47a67e768);
  uVar6 = lib::L2CValue::operator<=(pLVar5,pLVar7);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x5b4ca7514);
    uVar6 = lib::L2CValue::operator<=(pLVar7,pLVar5);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,1.0);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      fVar14 = (float)lib::L2CValue::as_number(aLStack320);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
      fVar12 = (float)app::sv_math::vec2_angle(fVar12,fVar13,fVar14,fVar15);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
      lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)auStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_70);
      goto LAB_710001b72c;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x31ed91fca);
    uVar6 = lib::L2CValue::operator<=(pLVar7,pLVar5);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack320,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      fVar14 = (float)lib::L2CValue::as_number(aLStack320);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
      fVar12 = (float)app::sv_math::vec2_angle(fVar12,fVar13,fVar14,fVar15);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
      lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)auStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_70);
      goto LAB_710001b72c;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x6895f72a4);
    uVar6 = lib::L2CValue::operator<=(pLVar5,pLVar7);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack320,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      fVar14 = (float)lib::L2CValue::as_number(aLStack320);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
      fVar12 = (float)app::sv_math::vec2_angle(fVar12,fVar13,fVar14,fVar15);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
      lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)auStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_70);
      goto LAB_710001b72c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,1.0);
    fVar12 = (float)lib::L2CValue::as_number(aLStack144);
    fVar13 = (float)lib::L2CValue::as_number(aLStack160);
    fVar14 = (float)lib::L2CValue::as_number(aLStack320);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
    fVar12 = (float)app::sv_math::vec2_angle(fVar12,fVar13,fVar14,fVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)auStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_70);
LAB_710001b72c:
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
  uVar6 = lib::L2CValue::operator<(aLStack288,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator+(aLStack288,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_REFLECT_ANGLE);
  fVar12 = (float)lib::L2CValue::as_number(aLStack320);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_ATTACK_HIT_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack320,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x50000000);
  uVar6 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack320);
    bVar2 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                      (LUA_SCRIPT_LINE_STATUS_SHIFT,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack336,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)auStack336);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack352,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_ATTACK_HIT_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack336,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack336,pvVar8);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack352);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack336);
      iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
      lib::L2CValue::L2CValue(aLStack352,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_DEAD);
      uVar6 = lib::L2CValue::operator==(aLStack352,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar6 & 1) == 0) {
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack336);
        iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
        lib::L2CValue::L2CValue(aLStack368,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_STANDBY);
        uVar6 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::~L2CValue(aLStack368);
          goto LAB_710001b9e8;
        }
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack336);
        iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
        lib::L2CValue::L2CValue(aLStack384,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_REBIRTH);
        uVar6 = lib::L2CValue::operator==(aLStack384,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        if ((uVar6 & 1) != 0) goto LAB_710001b9f0;
      }
      else {
LAB_710001b9e8:
        lib::L2CValue::~L2CValue(aLStack352);
LAB_710001b9f0:
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_FLAG_OPPONETN_DEAD);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      }
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_INSTANCE_WORK_ID_FLAG_STAR);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack336);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(pBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack352);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_FLAG_OPPONETN_DEAD);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      }
      this = auStack336;
      goto LAB_710001baa0;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_FLAG_OPPONETN_DEAD);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIKACHU_STATUS_FINAL_FLAG_OPPONETN_DEAD);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  }
  this = &local_70;
LAB_710001baa0:
  lib::L2CValue::~L2CValue((L2CValue *)this);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKACHU_STATUS_FINAL_FLAG_OPPONETN_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  uVar6 = lib::L2CValue::operator==((L2CValue *)auStack336,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)auStack336);
  lib::L2CValue::~L2CValue(aLStack352);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIKACHU_LINK_NO_FINAL);
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_ATTACK_HIT_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,iVar3);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    bVar2 = app::lua_bind::LinkModule__link_impl
                      (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack400,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)auStack336);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    app::LinkEventFinal::new_l2c_table();
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack336,0x105a79305b);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xce1c6df7b);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_6 + 200),3);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack336,0x7bff80916);
    lib::L2CValue::operator=(pLVar7,pLVar5);
    iVar3 = _FIGHTER_STATUS_KIND_PIKACHU_FINAL_DAMAGE_FLY;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack336,0xa6d16ef1f);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKACHU_LINK_NO_FINAL);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack336,0x11f63699bf);
    pcVar10 = (code *)lib::L2CValue::as_pointer(pLVar5);
    plVar11 = (long *)(*pcVar10)();
    app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar11,(L2CValue *)auStack336);
    app::lua_bind::LinkModule__send_event_parents_struct_impl
              (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3,(LinkEvent *)plVar11);
    app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar11);
    lib::L2CValue::L2CValue(aLStack416,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    (**(code **)(*plVar11 + 8))(plVar11);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PIKACHU_LINK_NO_FINAL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::LinkModule__unlink_impl
              (*(BattleObjectModuleAccessor **)((long)param_6 + 0x40),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)auStack336);
  }
  lib::L2CValue::L2CValue(param_5,aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

