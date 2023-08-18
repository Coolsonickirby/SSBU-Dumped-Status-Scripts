
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::JackSpecialNLanding_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *this_01;
  Hash40 HVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_01 = aLStack112;
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_JUMP);
      uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_BARRAGE_START);
        uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_BARRAGE);
          uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar2 & 1) == 0) {
            pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_BARRAGE_END)
            ;
            uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar2 & 1) == 0) goto LAB_71000e6b60;
          }
        }
        HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,HVar3);
        HVar3 = lib::L2CValue::as_hash(aLStack96);
        HVar3 = app::lua_bind::FighterMotionModuleImpl__motion_kind_kirby_copy_original_impl
                          (this->moduleAccessor,HVar3);
        lib::L2CValue::L2CValue(aLStack80,HVar3);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1e7455a778);
        uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x187445dc36);
          uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar2 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1cc6224f07);
            uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar2 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x19628c764b);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              goto LAB_71000e6d14;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack80,0x1c2affe3ab);
        lib::L2CValue::operator_(aLStack96,aLStack80);
LAB_71000e6d14:
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,aLStack96);
        FUN_7100154e40(this,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack112,aLStack96);
        lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack96);
        return;
      }
      lib::L2CValue::L2CValue(aLStack80,0x163f516a86);
      FUN_7100154e40(this,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,0x163f516a86);
      lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_71000e6b60:
      lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
      goto LAB_71000e6ab4;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0x11e2130515);
  FUN_7100154e40(this,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x11e2130515);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0xa0);
  this_01 = aLStack96;
LAB_71000e6ab4:
  lib::L2CValue::_L2CValue(this_01);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

