
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710011f710(L2CAgent *param_1)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Hash40 HVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
  iVar5 = lib::L2CValue::as_integer(aLStack64);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar4 & 1U) == 0) goto LAB_710011fdd8;
  lib::L2CValue::L2CValue(aLStack64,CONTROL_PAD_BUTTON_SPECIAL);
  iVar5 = lib::L2CValue::as_integer(aLStack64);
  bVar3 = app::lua_bind::ControlModule__check_button_on_impl(param_1->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COUNT);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    iVar6 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar5,iVar6);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING_CONTINUAL);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    HVar10 = app::lua_bind::MotionModule__motion_kind_partial_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack64,HVar10);
    lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
    uVar9 = lib::L2CValue::operator==(aLStack64,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar9 & 1) != 0) goto LAB_710011fdd8;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar12 = (float)app::lua_bind::MotionModule__rate_partial_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack64,fVar12);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    uVar9 = lib::L2CValue::operator==(aLStack64,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar12 = (float)app::lua_bind::MotionModule__frame_partial_impl(param_1->moduleAccessor,iVar5)
      ;
      lib::L2CValue::L2CValue(aLStack80,fVar12);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = app::lua_bind::MotionModule__end_frame_partial_impl(param_1->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,uVar7);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::operator-(aLStack96,aLStack80);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar9 = lib::L2CValue::operator<=(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack176,0x144eb7d0b1);
        uVar9 = lib::L2CValue::as_integer(aLStack128);
        uVar11 = lib::L2CValue::as_integer(aLStack176);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar9,uVar11);
        lib::L2CValue::L2CValue(aLStack160,iVar5);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::operator/(aLStack144,aLStack160);
        lib::L2CValue::L2CValue(aLStack128,0.001);
        lib::L2CValue::operator+(aLStack192,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack176);
        app::lua_bind::MotionModule__set_rate_partial_impl(param_1->moduleAccessor,iVar5,fVar12);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
      }
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lVar2 = -0x30;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COUNT);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__inc_int_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
    iVar5 = lib::L2CValue::as_integer(aLStack64);
    bVar3 = app::lua_bind::KineticModule__is_enable_energy_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar4 & 1U) == 0) goto LAB_710011fdd8;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    uVar13 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack128,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue(aLStack64,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,aLStack112);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::Vector2__create
              (param_1,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar9 = lib::L2CValue::operator==(pLVar8,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar9 & 1) == 0) {
LAB_710011f96c:
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_X);
      fVar12 = (float)lib::L2CValue::as_number(pLVar8);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__add_float_impl(param_1->moduleAccessor,fVar12,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_GROUND_ATTACH_PREV_POS_X);
      fVar12 = (float)lib::L2CValue::as_number(pLVar8);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__add_float_impl(param_1->moduleAccessor,fVar12,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Y);
      fVar12 = (float)lib::L2CValue::as_number(pLVar8);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__add_float_impl(param_1->moduleAccessor,fVar12,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_GROUND_ATTACH_PREV_POS_Y);
      fVar12 = (float)lib::L2CValue::as_number(pLVar8);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__add_float_impl(param_1->moduleAccessor,fVar12,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar9 = lib::L2CValue::operator==(pLVar8,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar9 & 1) == 0) goto LAB_710011f96c;
    }
    lVar2 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_710011fdd8:
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COLLISION_LINE_CHECK_COUNT);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__dec_int_impl(param_1->moduleAccessor,iVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_ICON_EFFECT_FRAME)
  ;
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  bVar3 = app::lua_bind::WorkModule__count_down_int_impl(param_1->moduleAccessor,iVar5,0);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__inc_int_impl(param_1->moduleAccessor,iVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  FUN_710011ec30(param_1);
  return;
}

