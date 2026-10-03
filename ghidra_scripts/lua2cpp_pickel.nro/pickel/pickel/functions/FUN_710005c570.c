
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710005c570(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_on_trriger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1) != 0) {
    FUN_710005d190(this);
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_item(this);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_catch(this);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_escape(this);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_guard(this);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_attack(this);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump(this);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PAD_CMD_CAT1_FLAG_TURN_DASH);
      lib::L2CValue::operator&(pLVar5,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_TURN_DASH);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue(aLStack112,true);
          goto LAB_710005c988;
        }
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_PAD_CMD_CAT1_FLAG_DASH);
      lib::L2CValue::operator&(pLVar5,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_DASH);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_STATUS_KIND_DASH);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue(aLStack112,true);
          goto LAB_710005c988;
        }
      }
      lib::L2CValue::L2CValue(aLStack112,false);
    }
LAB_710005c988:
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) goto LAB_710005c9a8;
    bVar2 = false;
  }
  else {
LAB_710005c9a8:
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(aLStack144,bVar2);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) goto LAB_710005cab4;
  FUN_710005cf60(aLStack96,this);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
      uVar6 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
        uVar6 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar6 & 1) != 0) goto LAB_710005cb68;
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_50,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N2_SUCCESS);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710005cd78;
        }
      }
      else {
LAB_710005cb68:
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
        uVar6 = lib::L2CValue::operator<=(aLStack112,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_50,
                     _FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_EFFECT_HANDLE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue(aLStack128,-1.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_number(aLStack128);
          uVar8 = lib::L2CValue::as_number(aLStack144);
          local_50 = CONCAT44(uVar8,uVar7);
          uStack72 = 0;
          app::lua_bind::EffectModule__set_custom_uv_offset_impl
                    (this->moduleAccessor,uVar4,(Vector2f *)&local_50,0);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_50,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N2_SUCCESS);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::~L2CValue(aLStack112);
          goto LAB_710005cd78;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710005cd78:
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
LAB_710005cab4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

